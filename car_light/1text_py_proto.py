# message comu {
#     string mmm = 1;
# }
import protobuf.com_pb2 as c
# 实例化对象 comu，注意名字和定义的一致
comu = c.comu()
# 参数幅值，mmm和定义的一致

comu.mmm = "wy"

# 序列化
s=comu.SerializeToString()
# 类型是byte
print(type(s))
# 占用空间
print(len(s))
# 并不是string 而是b'\n\x02wy'
print(s)

# 反序列化，转成comu2
comu2 = c.comu()
# 反序列化返回的length为长度，长度等于len（s）
length=comu2.ParseFromString(s)
print(comu2)
print(length==len(s))
a= 3
