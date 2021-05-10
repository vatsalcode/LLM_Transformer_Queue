def abbreviations():
    fuller = {'AOL': {'First': 'American', 'Second': 'Online'}, 'ABC': {'First': 'American', 'Second': 'Broadcasting', 'Third': 'Company'}, 'BBC': {'First': 'British', 'Second': 'Broadcasting', 'Third': 'Corporation'}}
    for i, j in fuller.items():
        print(f"{i}:")
        for k, l in j.items():
            print(f"{k}: {l}")


abbreviations()
