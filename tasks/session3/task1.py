from pynotifier import notification
import psutil

battery= psutil.sensors_battery()
percent=battery.percent
print(percent)
notification("battery percentage",str(battery.percent),"%Remaining",duration=15).send()