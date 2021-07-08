

class Solution(object):
    def findBall(self, grid):
        
        numberOfColumns = len(grid[0]) 
        fallLocations = []  
        for startingColumn in range(numberOfColumns):  
            fallLocations.append(self.findBallFallLocation(grid, startingColumn))
        return fallLocations
    
    def findBallFallLocation(self, grid, startingColumn):
        numberOfRows = len(grid)  
        numberOfColumns = len(grid[0]) 
        ballColumnLocation = startingColumn 
        for ballRowLocation in range(numberOfRows):
            if grid[ballRowLocation][ballColumnLocation] == 1 and ballColumnLocation + 1 < numberOfColumns and grid[ballRowLocation][ballColumnLocation + 1] == 1:
                ballColumnLocation = ballColumnLocation + 1
                continue
            if grid[ballRowLocation][ballColumnLocation] == -1 and ballColumnLocation - 1 >= 0 and grid[ballRowLocation][ballColumnLocation - 1] == -1:
                ballColumnLocation = ballColumnLocation - 1
                continue
            return -1
        return ballColumnLocation
