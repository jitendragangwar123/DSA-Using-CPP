# Python
def findPair(arr,target):
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            if arr[i]+arr[j]==target:
                print(arr[i],arr[j])
                return
    print("Not Found")            

arr=[1,2,3,2,3,15]
target=16
findPair(arr,target) // 1 15


#JavaScript 
# let arr=[1,2,3,4,2,4,6,18];
# let n=arr.length;
# let target=30
#  function findSum(arr,n,target){
#      for(let i=0;i<n-1;i++){
#          for(let j=i+1;j<n;j++){
#             if(arr[i]+arr[j]==target){
#                 console.log(arr[i],arr[j]);
#                 return;
#             }
#         }
#      }
#     console.log("Pair Not Found");
# }

# findSum(arr,n,target); 
