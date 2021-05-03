def stockmax(p):
    ind_max = p.index(max(p)) 
    inv = sum(p[:ind_max]) 
    pf = len(p[:ind_max])*p[ind_max] - inv 
    if len(p[ind_max+1:]) > 0:
        pf += stockmax(p[ind_max+1:])
    return pf
