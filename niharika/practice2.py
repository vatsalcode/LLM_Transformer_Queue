some = [1,2,3,4,5,6]
print(4 in some)
print(56 in some)

abc = 'hi to everyone here'
print(abc.split())
for rolla in abc :
    print(rolla)

thing = 'junk/yum/kiki'
print(thing.split('/'))

purse = dict()
purse['money'] = 67
purse['tissues'] = 34
print(purse)
print(purse['money'])

purse['tissues'] = purse['tissues'] + 78
print(purse)

count = dict()
names = ['csev','bhu','nfymkju','kju','kju','csev','bhu']
for bullshit in names :
    count[bullshit] = count.get(bullshit,0) + 1
print(count)

