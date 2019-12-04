#ifndef VIDEOINPUT_H
#define VIDEOINPUT_H

#include <QOpenGLTexture>

#include "../media.h"
#include "render/colormanager.h"

class VideoInput : public MediaInput
{
public:
  VideoInput();

  virtual Node* copy() const override;

  virtual QString Name() const override;
  virtual QString id() const override;
  virtual QString Category() const override;
  virtual QString Description() const override;

  virtual void Release() override;

  NodeInput* matrix_input() const;

  NodeOutput* texture_output() const;

  virtual QString Code(NodeOutput* output) const override;

  //virtual void Hash(QCryptographicHash *hash, NodeOutput* from, const rational &time) override;

protected:

private:
  NodeInput* matrix_input_;

  NodeOutput* texture_output_;

};

#endif // VIDEOINPUT_H