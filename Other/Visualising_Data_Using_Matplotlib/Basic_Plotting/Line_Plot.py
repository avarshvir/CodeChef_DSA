# Copy the
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0,10,100)
y = 2*x

plt.figure(figsize=(6,4))
plt.plot(x,y)
plt.title('Line')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.grid(True)
plt.show()