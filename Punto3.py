import numpy as np 
import matplotlib.pyplot as plt

#Extrae las diferentes columnas del archivo
t, x, v = np.loadtxt('data.txt', skiprows=1, unpack=True)

#Grafica 
plt.plot(t, x)
plt.savefig('plot.png')
