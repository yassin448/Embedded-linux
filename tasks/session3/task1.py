from pynotifier import notification
import psutil

battery= psutil.sensors_battery()
percent=battery.percent
print(percent)
notification("batter percentage",str(battery.percent),"%Remaining",duratioon=15).send()