ms={} 
for _ in range(int(raw_input())): 
    Name=raw_input() 
    Grade=float(raw_input()) 
    ms[Name]=Grade 
v=ms.values()
snd=sorted(list(set(v)))[1] 
snd_lowest=[] 
for key,value in ms.items():  
    if value==snd: 
        snd_lowest.append(key) 
snd_lowest.sort() 
for name in snd_lowest:
    print name 
