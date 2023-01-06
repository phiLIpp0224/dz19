function Simple_numbers_Philipp %main function
  clear;
  clc;
  syms WA;
  syms AsD;
  N_num = 128;
  p = simple_list(N_num)
  WA = 0;


  ZkZ = randi([5 20]);
  arr(1) = 2;
  deg(1) = 20;


  for i= 2 : ZkZ
    arr(i) = p(randi([1 32]));
      deg(i) = randi([18 25]);
       endfor

 el = max(arr);


  for i = 1 : ZkZ
      WA = WA + arr(i)^deg(i);
        endfor


  while((WA > 2^128) && (WA < 2^123))
      ZkZ = randi([5 10]);
         arr(1) = 2;
          deg(1) = 20;

           for i= 2 : k
              arr(i) = p(randi([1 32]));
                deg(i) = randi([18 25]);
                  endfor

                   el = max(arr);
                    WA = 0;

                      for i = 1 : ZkZ
                         WA = WA + arr(i)^deg(i);
                             endfor
                               log2(WA);
  endwhile


 WA = WA+1;
  answer = 0;




  for a = 2 : ceil(log2(WA))
    if (mod(a^(WA-1), WA) == 1)
      ans = 1;

      for i = 1 : ZkZ
        if (mod(a^((WA-1) / p(i)), WA) == 1)
          ans = 0;
             endif
               endfor

                if (ans == 1)
                  answer = a;
                     endif
                         endif
                           endfor

  if (answer != 0)
     disp(sym(WA));
        disp("Prime number");

              else
               disp(sym(WA));
                  disp("Not a Prime number");

                 endif

pollard_alg(WA, round(log2(WA)));
endfunction

function arr = simple_list (N) % поиск простых чисел в диапазоне от  2 до 128
  arr = zeros(N);

  for ZkZ = 2 : N
      for j = 2 : N

           if (~mod(ZkZ, j))
                 break
                   endif
                    endfor

                 if (j > (ZkZ / j))
                    arr(j) = ZkZ;
                      endif
                         endfor
                        arr(arr == 0) = [];
endfunction

function pollard_alg(WA, N)
  res = 0;
  a = floor(WA / 2);

 for i = 1 : N
    AsD = mod(a^factorial(i)-1, WA);

      if ((gcd(AsD, WA) != 1) && (gcd(AsD, n) != WA))
         res = 1;
          sym(AsD)
            endif
            endfor
            if(res == 0)
              1
             endif

 endfunction
