from urllib import request
print(request.urlopen("http://www.google.com").getcode())
print(request.urlopen("http://www.google.com"))
print(request.urlopen("http://www.google.com").read())
print(request.urlopen("http://www.github.com").getcode())
print(request.urlopen("http://www.github.com"))
print(request.urlopen("http://www.github.com").read())
