echo "words words words ⚑"
echo """
<html>
  <head>
  </head>\n\n

  <body>
  </body>
</html> """

proc re(s: string): string = s

echo r".""."
echo re"\b[a-z]++\b"

#---------------------------------------------------

echo "abc"[0]
echo "abcdefg"[0 .. 4]
echo "abcdefg"[0 .. ^2]

#---------------------------------------------------

import strutils

var a = "hello welcome,friend"

# The split proc takes a sequence of characters and splits a string based on them
echo a.split({' ', ','})

# The contains proc determines whether a string contains a substring or character
echo a.contains("hello")
