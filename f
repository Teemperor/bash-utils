#!/bin/bash
search="$1"
shift
find . -name "*${search}*" $@
