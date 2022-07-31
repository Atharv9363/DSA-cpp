//https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927

void reverseStr(string& str, int i, int j){
   // cout << "call recieved for "<< str << endl;
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    reverseStr(str,i,j);
}

string reverseString(string str)
{
    reverseStr(str, 0, str.length()-1);
    return str;
}
