def names(name):
    sta = """
    Hello {}!
    Welcome to our world of new innovations.   
    """
    print(sta.format(name))


def altnames(name):
    st = f"""
    Hello {name}!
    Welcome to our new era!
    """
    print(st)


n = input("What's your name?\n")
names(n)
altnames(n)

