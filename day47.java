string a ="cat";
string a ="act";

for (int i = 0; i<a.length(); i++){
  char c= a.charAt (i)
  boolean isAnagram = false;
  for (int j = 0; j<b.length(); j++) {
    if(b.charAt(j)==c) {
      isAnagram = true;
      break;
    }  
