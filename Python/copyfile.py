s = ''
with open("file1.txt",'r') as file1:
	s = file1.readlines()		

with open("file2.txt",'w') as file2:
	file2.writelines(s)			

	
