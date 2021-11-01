#include <stdio.h>

void permuteRec(char str[], int n, int index=-1, char curr[] = "") 
{ 
    // base case 
    if (index == n) 
        return; 
  
    printf("\n"); 
    for (int i = index + 1; i < n; i++) { 
  
        curr += str[i]; 
        permuteRec(str, n, i, curr); 
  
        // backtracking 
        curr = curr.erase(curr.size() - 1); 
    } 
    return; 
} 
  
// Generates power set in lexicographic 
// order. 
void powerSet(string str) 
{ 
    sort(str.begin(), str.end()); 
    permuteRec(str, str.size()); 
} 
  
// Driver code 
int main() 
{ 
    char str = "cab"; 
    powerSet(str); 
    return 0; 
} 