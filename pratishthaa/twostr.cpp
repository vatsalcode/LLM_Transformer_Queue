int main() {
    int n;
    cin >> n;
    for (int t=0;t<n;t++){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        string letters = "abcdefghijlkmnopqrstuvwxyz";
        string output = "NO";
        for (int i=0;i<letters.size();i++){
            if (s1.find(letters[i])!=string::npos && s2.find(letters[i])!=string::npos){
                output = "YES";
                break;
            }
        }
        cout << output << endl;
    }
    return 0;
}
