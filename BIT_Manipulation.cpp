int count_bits__fast(int n){
    int count = 0;
    while(n){
        count++;
        n = n & (n-1);  //13->1101,12->1100..and of both ->(1101)&(1100)=1100..one 1 decreases..continue doing will give count of zeroes
    }
    return count;
}

int count_bits(int n){
    int count = 0;
    while(n > 0){
        count += ( n&1 ); //And results -> 0&0 = 0, 0&1 = 0, 1&1 = 1
        n = n >> 1;  //Right shifting the number
    }
    return count;
}

//Tip:-
//Creating a mask is nothing but left shifting a 1

int getithbit(int n, int i){
    return (n & (1<<i)) != 0 ? 1 : 0;
}
//Setting the ith bit-> just Or with a mask created by leftshifting
int setBit(int n, int i){
    return (n | (1<<i) );
}

//Clear the ith bit
int clearbit(int n, int i){
    int mask = ~(1<<i);
    return (n & mask);
}

//Generate all subsets using bitmasking
void filterschar(char *a, int no){
    // a = 'abc' no = 5 -- Output should ac
    int i = 0;
    while(no > 0){
        (no & 1) ? cout<<a[i] : cout<<"";
        i++;
        no = no >> 1;   
    }
    cout<<endl;
}

void generatesubsets(char *a){
    //Generate a range of range of numbers from 0 to 2^n - 1
    int n = strlen(a);
    int range = (1<<n) - 1;
    for(int i = 0; i <= range; i++){
        filterschar(a, i);  //will print the character according to the number
    }
}
