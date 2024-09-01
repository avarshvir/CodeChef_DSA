import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)
y = np.sin(x)

plt.plot(x, y)
plt.title("Sine Wave", fontsize=20, fontweight='bold', color='red', pad=20)
plt.xlabel("X-axis", fontsize=14, fontstyle='italic', labelpad=10)
plt.ylabel("Y-axis", fontsize=14, fontfamily='serif', labelpad=-10)
plt.show()