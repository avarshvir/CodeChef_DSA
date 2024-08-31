import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)
y1 = np.sin(x)
y2 = np.cos(x)

plt.plot(x, y1, color='red')
plt.plot(x, y2, color='#00FF00')  # Green
plt.plot(x, y1 + 2, linestyle='--', color=(0, 0, 1))  # Blue
plt.plot(x, y2 + 2, linestyle=':', color=(1, 0, 1, 0.5))  # Semi-transparent magenta

plt.title('Different Color Specifications')
plt.show()