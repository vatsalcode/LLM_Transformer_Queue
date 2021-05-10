>>> class Switcher(object):
          def indirect(self,i):
                   method_name='number_'+str(i)
                   method=getattr(self,method_name,lambda :'Invalid')
                   return method()
          def number_0(self):
                   return 'zero'
          def number_1(self):
                   return 'one'
          def number_2(self):
                   return 'two'
>>> s=Switcher()
>>> s.indirect(2)
