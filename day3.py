'''
gpa=(float(input('enter your marks')))
if gpa>2.0:
    print('accepted')
else: 
    print('not accepted')
'''
#%%
'''
num1=(int(input('enter marks of eng\n')))
num2=(int(input('enter marks of math\n')))
num3=(int(input('enter marks of pst\n')))
sum=num1+num2+num3
per=sum/300*100
print('percentage =',per)
if per>40:
    print('pass')
else:
    print('fail')
'''
#%%
'''
num = 1
while num<=200:
    print(num),
    num=num*2  
'''
#%%
'''
x=("hello")
y=x+(" there")
print(y)
'''
#%%
'''
#to count the length of string
x=("hello bro")
print(len(x))
'''
#%%
'''
x=str(input('enter word to count the length of string\n'))
print('length of string is',len(x))
'''
#%%
'''
#lists in python
thislist=['apple','banananana','pine Apple']
print(thislist)
print('length of list is =',len(thislist))
'''
#%%
list=['apple','bananana','orange']
print(list)
#list.append('pineapple')
list.append(str(input('enter name to add in list\n')))#input from the user
print(list)
list.remove(str(input('enter name to remove from list')))#use to remove from list
print(list)#print the updated list
#%%


























