def minHeightShelves(books, shelf_width):
	dp = [0] 
	for i in range(len(books)): 
		w, j = books[i][0], i
		while j >= 0 and w <= shelf_width:    
			j -= 1
			w += books[j][0] 
		dp.append(min(dp[k]+max(books[x][1] for x in range(k,i+1)) for k in range(j+1,i+1)))
	return dp[-1]
