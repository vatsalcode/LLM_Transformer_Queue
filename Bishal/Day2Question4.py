from datetime import datetime
from datetime import date

print("Default Format:")
print(datetime.today())
print("Changed Format:")
new = datetime.now()
print(new.strftime("Format 1:\n%d.%m.%Y\n%H:%M:%S\n"))
print(new.strftime("Format 2:\n%d %B/%y\n%H:%M:%S\n"))
print(new.strftime("Format 3:\n%d %b/%Y\n%H:%M:%S"))
print(new.strftime("Format 3:\n%m/%d/%Y\n%I:%M %p"))
print("Printing only dates:")
print(date.today().strftime("%d %B/%y"))
