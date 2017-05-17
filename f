#!/usr/bin/bash
search="$1"
shift
find -not -path '*/\.*' -name "*${search}*" $@
