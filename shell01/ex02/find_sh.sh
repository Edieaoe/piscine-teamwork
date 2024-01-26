find . -type f -name "*.sh" -print | sed 's/\.sh$//' | xargs basename
