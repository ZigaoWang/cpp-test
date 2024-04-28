#!/bin/bash

# Get current date and time
current_date=$(date +"%Y-%m-%d")
current_time=$(date +"%H:%M:%S")

# Define a descriptive commit message
commit_message="Auto commit: Changes made on $current_date at $current_time"

# Navigate to your git repository directory
cd /Users/zigaowang/Documents/IT\ Stuff/USACO\ C++/cpp-test

# Add all changes, commit with descriptive message, and push changes
git add --all && git commit -m "$commit_message" && git push
