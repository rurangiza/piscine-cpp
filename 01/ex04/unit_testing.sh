
# Shouldn't work
./bin/runthis input.txt # not enough arguments
./bin/runthis input.txt "Harry" "Potter" "Bilbo" # too many arguments

# not sure
./bin/runthis input.txt "" "Potter"  # empty first string
./bin/runthis input.txt "Harry" "" # empty last string
./bin/runthis input.txt "" "" # empty both string

# Shoud work
./bin/runthis input.txt "Harry" "Potter" # too many arguments
