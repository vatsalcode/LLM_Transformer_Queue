import strutils, random

randomize()
let answer = rand(10)
while true:
  echo "I have a number from 1 to 10, what is it? "
  let guess = parseInt(stdin.readLine)

  if guess < answer:
    echo "Too low, try again"
  elif guess > answer:
    echo "Too high, try again"
  else:
    echo "Correct!"
    break

block busyloops:
  while true:
    while true:
      break busyloops


