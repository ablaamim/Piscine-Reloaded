#!/bin/bash

find . -type f -name "*.sh" | rev | cut -d / -f1 | cut -c 4- | rev
