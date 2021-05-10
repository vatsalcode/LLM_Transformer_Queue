StateNumbers stateInProcess = getStates().remove(0);
ArrayList<Integer> remainingNumbers = stateInProcess.getRemainingNumbers();
for(int j = 0; j < remainingNumbers.size(); j++){
  for(int i = 0; i < remainingNumbers.size(); i++){
    for(Operator op : Operator.values()){       // Looping over different operators
       if(i == j) continue;
           ...

    }
  }
}
