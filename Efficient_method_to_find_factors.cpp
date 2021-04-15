int factor(int n) {
    int i = 2;
    vi v;
   while(i * i <= n) {
      if(n %i == 0 && n/i != i) {
          v.pb(i);
          v.pb(n/i);
      }
      else v.pb(i);
      i++;
   }
   int k = *max_element(all(v));
   return k;
}
