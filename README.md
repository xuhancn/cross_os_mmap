# cross_os_mmap

When I was developing the PyTorch AOTI feature for Windows, I discovered that the POSIX mmap-related functions did not work on the Windows platform. This issue can be observed in the following code segment:
https://github.com/pytorch/pytorch/blob/303f514d5ba39e7e1251285e1b1cb9a4662c60bc/torch/csrc/inductor/aoti_runtime/model_base.h#L638-L670

To address this gap, I initiated this project to develop a Windows-compatible implementation of the mmap-related functions.

Snapshot for `Linux` and `Windows`.
<img src="images/pic.png" width="800px">