str = 'xyz798'

try:
    i = float(str)
except (ValueError, TypeError):
    print('\nNot numeric')
print()
