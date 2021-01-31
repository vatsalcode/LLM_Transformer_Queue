>>> def zero():
        return 'zero'
>>> def one():
        return 'one'
>>> def indirect(i):
        switcher={
                0:zero,
                1:one,
                2:lambda:'two'
                }
        func=switcher.get(i,lambda :'Invalid')
        return func()
>>> indirect(4)
