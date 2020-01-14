# For studying IO redirection.
# Takes input from stdin and prints it to stderr and stdout

while read line; do
  printf "stderr: ${line}\n" 1>&2
  printf "stdout: ${line}\n"
done < /dev/stdin
