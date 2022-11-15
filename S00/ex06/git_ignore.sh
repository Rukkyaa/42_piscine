#!/bin/sh
git status -s --ignored | awk '{print $2}'
