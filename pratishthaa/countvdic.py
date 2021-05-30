ip_str = 'Hello, have you tried our tutorial section yet?'
ip_str = ip_str.casefold()
count = {x:sum([1 for char in ip_str if char == x]) for x in 'aeiou'}

print(count)
