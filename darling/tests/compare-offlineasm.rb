#!/usr/bin/env ruby
# Compare generated headers while allowing checkout-root differences in comments.
# Usage: ruby compare-offlineasm.rb reference.h regenerated.h
abort "usage: #{$PROGRAM_NAME} reference.h regenerated.h" unless ARGV.length == 2

def normalized(path)
  # offlineasm writes code origins (file paths) and an input hash as // comments, which differ between
  # checkouts. Drop only those; keep code, guards, line ordering and whitespace so other changes still fail.
  File.readlines(path).map { |line| line.sub(%r{//[^\n]*}, '') }
end

unless normalized(ARGV[0]) == normalized(ARGV[1])
  warn 'offlineasm headers differ beyond source comments'
  exit 1
end
puts 'offlineasm headers match apart from comments'
