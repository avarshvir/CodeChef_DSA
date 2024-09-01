import matplotlib.pyplot as plt
import numpy as np

# Create a figure with 2 subplots
fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(6, 4))

x = np.linspace(0, 10, 100)

# Plot sin(x) on the first subplot
ax1.plot(x, np.sin(x))
ax1.set_title('Sine Wave')

# Plot cos(x) on the second subplot
ax2.plot(x, np.cos(x))
ax2.set_title('Cosine Wave')

plt.tight_layout()
plt.show()