import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)
y = np.sin(x)

plt.plot(x, y)
plt.xlim(0, 10)  # Set x-axis range from 0 to 10
plt.ylim(-5, 5)  # Set y-axis range from -5 to 5
plt.title("Sine Wave with Adjusted Axes")
plt.show()