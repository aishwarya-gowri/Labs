class callDetail:
    def __init__(self,num1,num2,dur,calltype):
        self.ph1=num1
        self.ph2=num2
        self.dur=dur
        self.calltype=calltype

class Util:
    def __init__(self):
        self.lists=None
    def parse_customer(self,lists):
        objects=[]
        for x in lists:
            ob=x.split(",")
            objects.append(callDetail(ob[0],ob[1],ob[2],ob[3]))
        self.lists=objects
        print(lists)

        
call='9900090909,9990909090,6,STD'
call2='9009089899,9090909090,23,LOCAL'

lists=[call,call2]
x=Util().parse_customer(lists)
