// var array=[77,11,33,44,20,44,100],i,temp=[0];
//     for(i=0;i<array.length;i++){
//         for(var j=0;j<array.length-i;j++){
//             if(array[j]>array[j+1]){
//                 temp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//             }
//         }
//         console.log(array[i]);
//     }
// var i,min=0,array=[20,66,77,252,667];
// for(i=1;i<array.length;i++){
//     array=[0];
//     if(array[i]<min){

//         let data=array[i];
//         min=data;
//     }
//     console.log(min);
// }

// var a=0,b=1,c,i,n=9;
// for(i=1;i<=n;i++){
//     console.log(a);
//     c=a+b;
//     a=b;
//     b=c;
// }

// var i,count,n=10;
// for(i=1;i<=n;i++){
//     count=0;
//    for(var j=2;j<i-1;j++){
//     if(i%j==0){

//         count++;
//     }
//    }
//    if(count==0){
//     console.log(i);
//    }
// }

// var i,n=7,count=0;
// for(i=1;i<=n;i++){
// if(n%i==0){
//     count++;
// }
// }
// if(count==2){
//     console.log("prime number");
// }else{
//     console.log("not a prime number");
// }

// var i,j,array=[52,44,47,16,5,1,6,4,41,2],temp=0;
// for(i=0;i<=array.length;i++){
//     for(j=0;j<array.length;j++){
//         if(array[j]>array[j+1]){
//             temp=array[j];
//             array[j]=array[j+1];
//             array[j+1]=temp
//         }
//     }
// }
// for(let i=0;i<array.length;i++){
//     console.log(array[i]);
// }

// var i,min,array=[2,44,66,,11,2,3,444,6688,9];
// min=array[0];
// for(i=1;i<=array.length;i++){
//     if(array[i]<min){
//         min=array[i];
//     }
// }
// console.log(min);

// var i,max,array=[2,44,66,,11,2,3,444,6688,9];
// max=array[0];
// for(i=1;i<=array.length;i++){
//     if(array[i]>max){
//         max=array[i];
//     }
// }
// console.log(max);
// factorial
// var fcat=1,i,n=5;
// for(i=n;i>=1;i--){
// fcat=fcat*i;
// }
// console.log(fcat);

// fibonacci with function 

// function fib(num){
// var i,a=0,b=1,c;
// for(i=1;i<=num;i++){
//     console.log(a);
//     c=a+b;
//     a=b;
//     b=c;
// }
// }
// fib(6);

// var num=276,s,t,r;
// s=parseInt(num/100);
// t=parseInt(num/10)%10;
// r=parseInt(num%10);
// // result=r+t+s;
// console.log(`${r}`+`${t}`+`${s}`);