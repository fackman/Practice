from xml.dom.minidom import parse

StudentInfoXml = parse(r"info.xml")

StudentInfo = StudentInfoXml.documentElement

Students = StudentInfo.getElementsByTagName("student")

print(Students[0].getAttribute("name"))