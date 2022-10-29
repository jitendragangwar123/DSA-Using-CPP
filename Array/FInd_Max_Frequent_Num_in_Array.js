//Js
let maxCount=0;
let maxFrequentNum;
function findMaxFrqNum(arr,n){
    for(let i=0;i<n;i++){
         let count=0;
         for(let j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxCount){
        maxCount=count;
        maxFrequentNum=arr[i];
    }
 } 
 console.log(maxFrequentNum);
}
let arr=[1,2,3,4,6,4,18];
let n=arr.length;
findMaxFrqNum(arr,n); 
