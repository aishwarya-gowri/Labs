with open("seek.py") as file_obj:
    file_obj.seek(0,2)
    position=file_obj.tell()
    while(position>=0):
        file_obj.seek(position)
        ch = file_obj.read(1)
        print(ch,end="")
        position = position-1
