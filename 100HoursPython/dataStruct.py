'''
Descripttion: data struct from sspai 基础语法（上）
version: 1.0
Author: cani
Date: 2022-10-09 22:12:51
LastEditors: cani
LastEditTime: 2022-10-10 01:09:45
'''


from pprint import pprint


numbers = [1,2,3,4,5]
a = 1

print(numbers)
print(type(numbers))  #use type() to check type of list

alphabet = list('abcde') #从其他数据类型中进行创建
print(type(alphabet))
print(alphabet)

print("-------------------------------------------")
#索引和切片

##索引

a = numbers[4] #已知地址查询数值
b = alphabet.index("c") #已知数值求地址 仅用于元素值不重复的情况

##切片

c = numbers[1:4] # 2 3 4 不包含numbers[4]

##扩展列表 append() 和 extend()

others = [7,8,9]
others_str = list("fghjk")

numbers.append(others_str)
print(numbers)
alphabet.extend(others)
print(alphabet)
 

"""
append()追加任意类型元素
expend()如果发现追加的元素是同列表一样的元素，则依次加入进列表中
"""

#remove and pop
"""
remove()移除列表中的元素  可以直接根据内容移除
pop()除了根据索引数将元素移除掉，会返回被移除的元素
"""
print("-------------------------------------------")

#元组

account = ("user","mypassword") #元组创建后元素无法修改或删除
auth = ("MY_ACCOUNT","MY_PASSWORD") 
database = tuple(["DB_HOST","DB_PORT"])  #两种创建方式

#notice
greet = "Hello, 100gle",
print(type(greet)) #<class 'tuple'> 区别在字符串后多添加了一个英文逗号

#字典 Dict

info = {
    "name":"100gle",
    "site":"sspai.com",
    'personal_info': {'slogan': '自律即自由', 'gender': 'male'},
    "account_stats":[1000, 10000, 100000],
}

info1 = dict(   #不同定义方式
    name="100gle",
    personal_info = dict(slogan="自律即自由", gender="male"),
    greet="Hello, sspai!",
    account_stats=[1000, 10000, 100000]
)

print(info.get("name"))
pprint(info, indent= 2) #import pprint

info1.get("account_stats")
print(info.get("address", "Not Found") ) #定义未查找到的默认值 一般默认为None


## keys() values() items()

print(info.keys())
print(info.values())

#items() 返回每一组键值对

print(info.items())
for key, value in info.items():  # 3
    print(f"{key}: {value}")  # 4
    
print("-------------------------------------------")
#集合 Set


d={1,2}
print(type(d)) #set
s= set()

## 集合的运算  交集、并集、差集

number_set = {1,2,3,4,5,6,7,8,9,10}
odds = {1, 3, 5, 7, 9}  
evens = {2, 4, 6, 8, 10}
print(number_set)
print(odds.union(evens) == number_set)
print(number_set.intersection(odds)) #交集
print(number_set.difference(odds)) #差集