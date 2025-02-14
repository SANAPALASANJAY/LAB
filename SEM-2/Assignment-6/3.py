class Converter:
    def __init__(self, leng, unit):
        if unit == 'inches':
            self.cm = leng * 2.54
        elif unit == 'feet':
            self.cm = leng * 30.48
        elif unit == 'yards':
            self.cm = leng * 91.44
        elif unit == 'miles':
            self.cm = leng * 160934
        elif unit == 'kilometers':
            self.cm = leng * 100000
        elif unit == 'meters':
            self.cm = leng * 100
        elif unit == 'centimeters':
            self.cm = leng
        elif unit == 'millimeters':
            self.cm = leng/10
        else:
            print("Invalid Unit type")
        
    def centimeters(self):
        return self.cm
    def inches(self):
        return self.cm * 0.393701
    def feet(self):
        return self.cm * 0.0328084
    def yards(self):
        return self.cm * 0.0109361
    def miles(self):
        return self.cm / 160900
    def kilometers(self):
        return self.cm / 100000
    def meters(self):
        return self.cm / 100
    def millimeters(self):
        return self.cm * 10
    

c = Converter(9, 'inches')
print(c.meters())
